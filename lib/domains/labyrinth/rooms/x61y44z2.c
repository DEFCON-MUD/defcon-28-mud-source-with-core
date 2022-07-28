inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 61, 44, 2 }));
  set_short( "Corridor - x61y44z2" );
set_objects( DIR+"/npc/enforcer.c");
 set_exits( ([
  "north" : DIR+"/rooms/x61y45z2.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the green glow of the gunk in this stink-pit. The walls and floors are covered with dust. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe horror continues to the north.%^RESET%^");
}
