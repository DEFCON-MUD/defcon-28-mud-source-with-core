inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 47, 48, 1 }));
  set_short( "Hallway - x47y48z1" );
set_objects( DIR+"/npc/gorilla.c");
 set_exits( ([
  "west" : DIR+"/rooms/x46y48z1.c",
  "east" : DIR+"/rooms/x48y48z1.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the green glow of the crud in this stink-pit. The walls and floors are covered with dust. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
