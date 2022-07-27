inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 43, 48, 9 }));
  set_short( "Hallway - x43y48z9" );
set_objects( DIR+"/monsters/banker.c");
 set_exits( ([
  "west" : DIR+"/rooms/x42y48z9.c",
  "east" : DIR+"/rooms/x44y48z9.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the red glow of the crap in this dump. The walls and floors are covered with oil. The smell is outright dreadful.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
