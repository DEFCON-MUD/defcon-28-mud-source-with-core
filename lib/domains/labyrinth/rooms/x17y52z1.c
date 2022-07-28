inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 17, 52, 1 }));
  set_short( "Passage - x17y52z1" );
set_objects( DIR+"/npc/weevil.c");
 set_exits( ([
  "north" : DIR+"/rooms/x17y53z1.c",
  "south" : DIR+"/rooms/x17y51z1.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the green glow of the sludge in this joint. The walls and floors are covered with dust. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
