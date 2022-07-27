inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 42, 10, 1 }));
  set_short( "Passage - x42y10z1" );
set_objects( DIR+"/monsters/wasteworm.c");
 set_exits( ([
  "west" : DIR+"/rooms/x41y10z1.c",
  "east" : DIR+"/rooms/x43y10z1.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the green glow of the crud in this area. The walls and floors are covered with mud. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
