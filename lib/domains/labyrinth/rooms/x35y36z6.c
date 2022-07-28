inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 35, 36, 6 }));
  set_short( "Corridor - x35y36z6" );
set_objects( DIR+"/npc/dancer.c");
 set_exits( ([
  "west" : DIR+"/rooms/x34y36z6.c",
  "east" : DIR+"/rooms/x36y36z6.c",
  "north" : DIR+"/rooms/x35y37z6.c",
  "south" : DIR+"/rooms/x35y35z6.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the green glow of the muck in this stink-pit. The walls and floors are covered with oil. It smells like a hacker convention in here.%^RESET%^\n\nThe sewer continues to the west, east, north, and west.%^RESET%^");
}
