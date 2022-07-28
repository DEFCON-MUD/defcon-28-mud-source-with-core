inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 59, 62, 7 }));
  set_short( "Passage - x59y62z7" );
set_objects( DIR+"/npc/autobot.c");
 set_exits( ([
  "east" : DIR+"/rooms/x60y62z7.c",
  "south" : DIR+"/rooms/x59y61z7.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the iridium glow of the radioactive waste in this dump. The walls and floors are covered with dust. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe horror continues to the east, and west.%^RESET%^");
}
