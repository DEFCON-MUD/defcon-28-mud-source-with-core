inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 45, 23, 4 }));
  set_short( "Corridor - x45y23z4" );
set_objects( DIR+"/npc/roger.c");
 set_exits( ([
  "north" : DIR+"/rooms/x45y24z4.c",
  "south" : DIR+"/rooms/x45y22z4.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the red glow of the glorzo in this hellhole. The walls and floors are covered with mud. It smells like a hacker convention in here.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
