inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 20, 62, 9 }));
  set_short( "Hallway - x20y62z9" );
set_objects( DIR+"/monsters/slug.c");
 set_exits( ([
  "west" : DIR+"/rooms/x19y62z9.c",
  "east" : DIR+"/rooms/x21y62z9.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the purple glow of the gunk in this dump. The walls and floors are covered with blood. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
