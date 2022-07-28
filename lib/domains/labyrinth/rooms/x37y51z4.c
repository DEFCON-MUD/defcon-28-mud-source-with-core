inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 37, 51, 4 }));
  set_short( "Passage - x37y51z4" );
set_objects( DIR+"/npc/monitor.c");
 set_exits( ([
  "north" : DIR+"/rooms/x37y52z4.c",
  "south" : DIR+"/rooms/x37y50z4.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the iridium glow of the muck in this stink-pit. The walls and floors are covered with dust. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
