inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 48, 36, 9 }));
  set_short( "Passage - x48y36z9" );
set_objects( DIR+"/monsters/captain.c");
 set_exits( ([
  "west" : DIR+"/rooms/x47y36z9.c",
  "east" : DIR+"/rooms/x49y36z9.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the blue glow of the gunk in this dump. The walls and floors are covered with liquid. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
