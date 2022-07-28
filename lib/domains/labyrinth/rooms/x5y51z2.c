inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 5, 51, 2 }));
  set_short( "Hallway - x5y51z2" );
set_objects( DIR+"/npc/norman.c");
 set_exits( ([
  "north" : DIR+"/rooms/x5y52z2.c",
  "south" : DIR+"/rooms/x5y50z2.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the red glow of the crud in this area. The walls and floors are covered with oil. It smells like a hacker convention in here.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
