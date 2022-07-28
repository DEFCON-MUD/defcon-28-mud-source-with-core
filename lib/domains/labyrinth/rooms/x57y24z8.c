inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 57, 24, 8 }));
  set_short( "Corridor - x57y24z8" );
set_objects( DIR+"/npc/eric.c");
 set_exits( ([
  "west" : DIR+"/rooms/x56y24z8.c",
  "east" : DIR+"/rooms/x58y24z8.c",
  "south" : DIR+"/rooms/x57y23z8.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the orange glow of the sludge in this stink-pit. The walls and floors are covered with oil. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nThe horror continues to the west, east, and west.%^RESET%^");
}
