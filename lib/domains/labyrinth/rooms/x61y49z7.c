inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 61, 49, 7 }));
  set_short( "Corridor - x61y49z7" );
set_objects( DIR+"/npc/greenslime.c");
 set_exits( ([
  "north" : DIR+"/rooms/x61y50z7.c",
  "south" : DIR+"/rooms/x61y48z7.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the red glow of the sludge in this stink-pit. The walls and floors are covered with mud. The smell is outright dreadful.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
