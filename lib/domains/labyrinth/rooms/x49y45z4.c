inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 49, 45, 4 }));
  set_short( "Corridor - x49y45z4" );
set_objects( DIR+"/npc/iguana.c");
 set_exits( ([
  "north" : DIR+"/rooms/x49y46z4.c",
  "south" : DIR+"/rooms/x49y44z4.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the red glow of the sludge in this area. The walls and floors are covered with dust. It smells like a hacker convention in here.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
