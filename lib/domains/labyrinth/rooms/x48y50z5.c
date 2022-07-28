inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 48, 50, 5 }));
  set_short( "Corridor - x48y50z5" );
set_objects( DIR+"/npc/craig.c");
 set_exits( ([
  "west" : DIR+"/rooms/x47y50z5.c",
  "east" : DIR+"/rooms/x49y50z5.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the green glow of the radioactive waste in this stink-pit. The walls and floors are covered with mud. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
