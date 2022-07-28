inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 59, 44, 6 }));
  set_short( "Hallway - x59y44z6" );
set_objects( DIR+"/npc/peter.c");
 set_exits( ([
  "north" : DIR+"/rooms/x59y45z6.c",
  "south" : DIR+"/rooms/x59y43z6.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the blue glow of the crud in this stink-pit. The walls and floors are covered with oil. The smell is outright dreadful.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
