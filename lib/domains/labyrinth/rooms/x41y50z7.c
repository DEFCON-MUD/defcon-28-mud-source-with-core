inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 41, 50, 7 }));
  set_short( "Passage - x41y50z7" );
set_objects( DIR+"/npc/doe.c");
 set_exits( ([
  "west" : DIR+"/rooms/x40y50z7.c",
  "north" : DIR+"/rooms/x41y51z7.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the purple glow of the gunk in this hellhole. The walls and floors are covered with mud. The smell is outright dreadful.%^RESET%^\n\nThe horror continues to the west, and north.%^RESET%^");
}
