inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 33, 49, 1 }));
  set_short( "Corridor - x33y49z1" );
set_objects( DIR+"/npc/vampire.c");
 set_exits( ([
  "north" : DIR+"/rooms/x33y50z1.c",
  "south" : DIR+"/rooms/x33y48z1.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the green glow of the gunk in this joint. The walls and floors are covered with slime. It smells like a hacker convention in here.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
