inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 35, 60, 0 }));
  set_short( "Passage - x35y60z0" );
set_objects( DIR+"/npc/rattlesnake.c");
 set_exits( ([
  "north" : DIR+"/rooms/x35y61z0.c",
  "south" : DIR+"/rooms/x35y59z0.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the orange glow of the glorzo in this hellhole. The walls and floors are covered with blood. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
