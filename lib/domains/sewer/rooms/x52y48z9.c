inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 52, 48, 9 }));
  set_short( "Passage - x52y48z9" );
set_objects( DIR+"/monsters/varysstark.c");
 set_exits( ([
  "west" : DIR+"/rooms/x51y48z9.c",
  "east" : DIR+"/rooms/x53y48z9.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the blue glow of the glorzo in this dump. The walls and floors are covered with dust. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
