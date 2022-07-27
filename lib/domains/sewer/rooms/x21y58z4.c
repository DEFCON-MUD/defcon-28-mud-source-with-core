inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 21, 58, 4 }));
  set_short( "Hallway - x21y58z4" );
set_objects( DIR+"/monsters/blob.c");
 set_exits( ([
  "west" : DIR+"/rooms/x20y58z4.c",
  "north" : DIR+"/rooms/x21y59z4.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the red glow of the crud in this area. The walls and floors are covered with dust. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe sewer continues to the west, and north.%^RESET%^");
}
