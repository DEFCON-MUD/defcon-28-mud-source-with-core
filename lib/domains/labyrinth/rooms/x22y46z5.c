inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 22, 46, 5 }));
  set_short( "Hallway - x22y46z5" );
set_objects( DIR+"/npc/probe.c");
 set_exits( ([
  "west" : DIR+"/rooms/x21y46z5.c",
  "east" : DIR+"/rooms/x23y46z5.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the orange glow of the gunk in this dump. The walls and floors are covered with dust. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
