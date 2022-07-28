inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 39, 32, 5 }));
  set_short( "Corridor - x39y32z5" );
set_objects( DIR+"/npc/radgoo.c");
 set_exits( ([
  "west" : DIR+"/rooms/x38y32z5.c",
  "east" : DIR+"/rooms/x40y32z5.c",
  "south" : DIR+"/rooms/x39y31z5.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the green glow of the gunk in this dump. The walls and floors are covered with blood. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nThe horror continues to the west, east, and west.%^RESET%^");
}
