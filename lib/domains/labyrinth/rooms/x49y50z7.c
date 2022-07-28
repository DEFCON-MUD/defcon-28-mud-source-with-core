inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 49, 50, 7 }));
  set_short( "Passage - x49y50z7" );
set_objects( DIR+"/npc/slug.c");
 set_exits( ([
  "east" : DIR+"/rooms/x50y50z7.c",
  "north" : DIR+"/rooms/x49y51z7.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the red glow of the gunk in this hellhole. The walls and floors are covered with mud. The smell is outright dreadful.%^RESET%^\n\nThe horror continues to the east, and north.%^RESET%^");
}
