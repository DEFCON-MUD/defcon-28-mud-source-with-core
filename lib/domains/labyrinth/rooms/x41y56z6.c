inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 41, 56, 6 }));
  set_short( "Corridor - x41y56z6" );
set_objects( DIR+"/npc/probe.c");
 set_exits( ([
  "west" : DIR+"/rooms/x40y56z6.c",
  "east" : DIR+"/rooms/x42y56z6.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the orange glow of the muck in this area. The walls and floors are covered with dust. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
