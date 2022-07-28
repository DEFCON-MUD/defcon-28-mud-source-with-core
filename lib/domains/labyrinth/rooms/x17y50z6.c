inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 17, 50, 6 }));
  set_short( "Hallway - x17y50z6" );
set_objects( DIR+"/npc/officer.c");
 set_exits( ([
  "west" : DIR+"/rooms/x16y50z6.c",
  "south" : DIR+"/rooms/x17y49z6.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the blue glow of the glorzo in this hellhole. The walls and floors are covered with mud. The smell is outright dreadful.%^RESET%^\n\nThe sewer continues to the west, and west.%^RESET%^");
}
