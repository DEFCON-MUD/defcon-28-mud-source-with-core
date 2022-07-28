inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 11, 25, 1 }));
  set_short( "Passage - x11y25z1" );
set_objects( DIR+"/npc/python.c");
 set_exits( ([
  "north" : DIR+"/rooms/x11y26z1.c",
  "south" : DIR+"/rooms/x11y24z1.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the red glow of the glorzo in this joint. The walls and floors are covered with liquid. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
