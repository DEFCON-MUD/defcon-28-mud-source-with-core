inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 38, 4, 9 }));
  set_short( "Hallway - x38y4z9" );
set_objects( DIR+"/npc/politician.c");
 set_exits( ([
  "west" : DIR+"/rooms/x37y4z9.c",
  "east" : DIR+"/rooms/x39y4z9.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the red glow of the glorzo in this dump. The walls and floors are covered with oil. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
