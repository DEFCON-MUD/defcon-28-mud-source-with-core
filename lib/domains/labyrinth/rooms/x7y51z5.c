inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 7, 51, 5 }));
  set_short( "Corridor - x7y51z5" );
set_objects( DIR+"/npc/norman.c");
 set_exits( ([
  "north" : DIR+"/rooms/x7y52z5.c",
  "south" : DIR+"/rooms/x7y50z5.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the iridium glow of the gunk in this area. The walls and floors are covered with mud. It smells like a hacker convention in here.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
