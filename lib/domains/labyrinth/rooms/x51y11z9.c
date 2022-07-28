inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 51, 11, 9 }));
  set_short( "Hallway - x51y11z9" );
set_objects( DIR+"/npc/angryweevil.c");
 set_exits( ([
  "north" : DIR+"/rooms/x51y12z9.c",
  "south" : DIR+"/rooms/x51y10z9.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the green glow of the glorzo in this area. The walls and floors are covered with mud. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
