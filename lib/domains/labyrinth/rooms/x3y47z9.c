inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 3, 47, 9 }));
  set_short( "Passage - x3y47z9" );
set_objects( DIR+"/npc/cyberslime.c");
 set_exits( ([
  "north" : DIR+"/rooms/x3y48z9.c",
  "south" : DIR+"/rooms/x3y46z9.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the iridium glow of the gunk in this stink-pit. The walls and floors are covered with slime. The smell is outright dreadful.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
