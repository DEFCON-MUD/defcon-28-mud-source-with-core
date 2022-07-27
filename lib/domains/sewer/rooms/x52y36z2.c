inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 52, 36, 2 }));
  set_short( "Passage - x52y36z2" );
set_objects( DIR+"/monsters/norman.c");
 set_exits( ([
  "west" : DIR+"/rooms/x51y36z2.c",
  "east" : DIR+"/rooms/x53y36z2.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the red glow of the glorzo in this joint. The walls and floors are covered with oil. The smell is outright dreadful.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
