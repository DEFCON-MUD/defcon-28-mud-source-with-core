inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 49, 44, 5 }));
  set_short( "Passage - x49y44z5" );
set_objects( DIR+"/npc/monitor.c");
 set_exits( ([
  "west" : DIR+"/rooms/x48y44z5.c",
  "north" : DIR+"/rooms/x49y45z5.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the iridium glow of the crud in this joint. The walls and floors are covered with mud. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe sewer continues to the west, and north.%^RESET%^");
}
