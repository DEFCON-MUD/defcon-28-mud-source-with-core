inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 21, 36, 2 }));
  set_short( "Corridor - x21y36z2" );
set_objects( DIR+"/npc/andy.c");
 set_exits( ([
  "east" : DIR+"/rooms/x22y36z2.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the purple glow of the muck in this joint. The walls and floors are covered with oil. It smells like a hacker convention in here.%^RESET%^\n\nThe horror continues to the east.%^RESET%^");
}
