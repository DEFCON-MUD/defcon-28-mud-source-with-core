inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 17, 27, 9 }));
  set_short( "Passage - x17y27z9" );
set_objects( DIR+"/npc/angryweevil.c");
 set_exits( ([
  "north" : DIR+"/rooms/x17y28z9.c",
  "south" : DIR+"/rooms/x17y26z9.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the iridium glow of the crud in this stink-pit. The walls and floors are covered with liquid. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
