inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 45, 59, 2 }));
  set_short( "Passage - x45y59z2" );
set_objects( DIR+"/npc/fieldmouse.c");
 set_exits( ([
  "north" : DIR+"/rooms/x45y60z2.c",
  "south" : DIR+"/rooms/x45y58z2.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the iridium glow of the radioactive waste in this area. The walls and floors are covered with blood. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
