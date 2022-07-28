inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 14, 54, 1 }));
  set_short( "Hallway - x14y54z1" );
set_objects( DIR+"/npc/eastauthorizer.c");
 set_exits( ([
  "west" : DIR+"/rooms/x13y54z1.c",
  "east" : DIR+"/rooms/x15y54z1.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the orange glow of the crap in this joint. The walls and floors are covered with slime. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
