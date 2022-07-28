inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 53, 44, 6 }));
  set_short( "Hallway - x53y44z6" );
set_objects( DIR+"/npc/snake.c");
 set_exits( ([
  "west" : DIR+"/rooms/x52y44z6.c",
  "south" : DIR+"/rooms/x53y43z6.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the blue glow of the crud in this joint. The walls and floors are covered with dust. It smells like a hacker convention in here.%^RESET%^\n\nThe horror continues to the west, and west.%^RESET%^");
}
