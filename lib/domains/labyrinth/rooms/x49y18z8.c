inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 49, 18, 8 }));
  set_short( "Corridor - x49y18z8" );
set_objects( DIR+"/npc/prisonfreddie.c");
 set_exits( ([
  "east" : DIR+"/rooms/x50y18z8.c",
  "south" : DIR+"/rooms/x49y17z8.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the green glow of the crud in this joint. The walls and floors are covered with dust. The smell is outright dreadful.%^RESET%^\n\nThe horror continues to the east, and west.%^RESET%^");
}
