inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 29, 12, 6 }));
  set_short( "Corridor - x29y12z6" );
set_objects( DIR+"/npc/peter.c");
 set_exits( ([
  "west" : DIR+"/rooms/x28y12z6.c",
  "north" : DIR+"/rooms/x29y13z6.c",
  "south" : DIR+"/rooms/x29y11z6.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the green glow of the muck in this stink-pit. The walls and floors are covered with dust. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe sewer continues to the west, north, and west.%^RESET%^");
}
