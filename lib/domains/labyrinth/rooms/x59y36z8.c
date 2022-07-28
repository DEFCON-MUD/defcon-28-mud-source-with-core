inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 59, 36, 8 }));
  set_short( "Hallway - x59y36z8" );
set_objects( DIR+"/npc/andy.c");
 set_exits( ([
  "west" : DIR+"/rooms/x58y36z8.c",
  "east" : DIR+"/rooms/x60y36z8.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the purple glow of the crud in this stink-pit. The walls and floors are covered with dust. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
