inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 11, 15, 5 }));
  set_short( "Corridor - x11y15z5" );
set_objects( DIR+"/npc/mosquito.c");
 set_exits( ([
  "north" : DIR+"/rooms/x11y16z5.c",
  "south" : DIR+"/rooms/x11y14z5.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the red glow of the glorzo in this dump. The walls and floors are covered with oil. It smells like a hacker convention in here.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
