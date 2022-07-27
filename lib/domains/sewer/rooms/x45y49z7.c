inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 45, 49, 7 }));
  set_short( "Corridor - x45y49z7" );
set_objects( DIR+"/monsters/ckroh.c");
 set_exits( ([
  "north" : DIR+"/rooms/x45y50z7.c",
  "south" : DIR+"/rooms/x45y48z7.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the blue glow of the crud in this area. The walls and floors are covered with slime. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
