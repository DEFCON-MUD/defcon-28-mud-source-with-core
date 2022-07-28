inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 21, 61, 9 }));
  set_short( "Hallway - x21y61z9" );
set_objects( DIR+"/npc/smallweevil.c");
 set_exits( ([
  "north" : DIR+"/rooms/x21y62z9.c",
  "south" : DIR+"/rooms/x21y60z9.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the green glow of the glorzo in this dump. The walls and floors are covered with slime. It smells like a hacker convention in here.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
