inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 49, 42, 1 }));
  set_short( "Hallway - x49y42z1" );
set_objects( DIR+"/npc/floorvine.c");
 set_exits( ([
  "west" : DIR+"/rooms/x48y42z1.c",
  "east" : DIR+"/rooms/x50y42z1.c",
  "south" : DIR+"/rooms/x49y41z1.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the green glow of the crud in this dump. The walls and floors are covered with blood. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nYou may be able to find escape to the west, east, and west.%^RESET%^");
}
