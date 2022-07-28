inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 45, 49, 7 }));
  set_short( "Hallway - x45y49z7" );
set_objects( DIR+"/npc/cyberslime.c");
 set_exits( ([
  "north" : DIR+"/rooms/x45y50z7.c",
  "south" : DIR+"/rooms/x45y48z7.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the green glow of the sludge in this dump. The walls and floors are covered with dust. The smell is outright dreadful.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
