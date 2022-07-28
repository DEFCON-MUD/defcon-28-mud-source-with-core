inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 37, 10, 5 }));
  set_short( "Corridor - x37y10z5" );
set_objects( DIR+"/npc/dba.c");
 set_exits( ([
  "east" : DIR+"/rooms/x38y10z5.c",
  "south" : DIR+"/rooms/x37y9z5.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the iridium glow of the crap in this area. The walls and floors are covered with slime. The smell is outright dreadful.%^RESET%^\n\nThe horror continues to the east, and west.%^RESET%^");
}
