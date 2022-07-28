inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 45, 62, 7 }));
  set_short( "Corridor - x45y62z7" );
set_objects( DIR+"/npc/monkey.c");
 set_exits( ([
  "west" : DIR+"/rooms/x44y62z7.c",
  "south" : DIR+"/rooms/x45y61z7.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the red glow of the crap in this sty. The walls and floors are covered with dust. The smell is outright dreadful.%^RESET%^\n\nThe sewer continues to the west, and west.%^RESET%^");
}
