inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 61, 24, 5 }));
  set_short( "Corridor - x61y24z5" );
set_objects( DIR+"/npc/glorzo.c");
 set_exits( ([
  "north" : DIR+"/rooms/x61y25z5.c",
  "south" : DIR+"/rooms/x61y23z5.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the green glow of the sludge in this area. The walls and floors are covered with dust. It smells like a hacker convention in here.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
