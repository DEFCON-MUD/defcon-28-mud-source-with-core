inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 3, 26, 4 }));
  set_short( "Hallway - x3y26z4" );
set_objects( DIR+"/npc/autodoc.c");
 set_exits( ([
  "east" : DIR+"/rooms/x4y26z4.c",
  "north" : DIR+"/rooms/x3y27z4.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the red glow of the crud in this joint. The walls and floors are covered with blood. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nYou may be able to find escape to the east, and north.%^RESET%^");
}
