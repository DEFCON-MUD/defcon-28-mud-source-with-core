inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 31, 50, 9 }));
  set_short( "Corridor - x31y50z9" );
set_objects( DIR+"/npc/politician.c");
 set_exits( ([
  "west" : DIR+"/rooms/x30y50z9.c",
  "north" : DIR+"/rooms/x31y51z9.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the purple glow of the gunk in this stink-pit. The walls and floors are covered with mud. The smell is outright dreadful.%^RESET%^\n\nThe horror continues to the west, and north.%^RESET%^");
}
