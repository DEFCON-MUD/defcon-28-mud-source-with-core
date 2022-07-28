inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 57, 62, 1 }));
  set_short( "Corridor - x57y62z1" );
set_objects( DIR+"/npc/repairdroid.c");
 set_exits( ([
  "west" : DIR+"/rooms/x56y62z1.c",
  "east" : DIR+"/rooms/x58y62z1.c",
  "south" : DIR+"/rooms/x57y61z1.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the green glow of the gunk in this dump. The walls and floors are covered with oil. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nThe horror continues to the west, east, and west.%^RESET%^");
}
