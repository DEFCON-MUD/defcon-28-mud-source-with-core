inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 17, 45, 9 }));
  set_short( "Passage - x17y45z9" );
set_objects( DIR+"/npc/culprit.c");
 set_exits( ([
  "north" : DIR+"/rooms/x17y46z9.c",
  "south" : DIR+"/rooms/x17y44z9.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the green glow of the glorzo in this joint. The walls and floors are covered with liquid. The smell is outright dreadful.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
