inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 37, 37, 2 }));
  set_short( "Corridor - x37y37z2" );
set_objects( DIR+"/npc/carson.c");
 set_exits( ([
  "north" : DIR+"/rooms/x37y38z2.c",
  "south" : DIR+"/rooms/x37y36z2.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the red glow of the gunk in this area. The walls and floors are covered with slime. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
