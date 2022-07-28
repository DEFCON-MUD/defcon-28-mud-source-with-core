inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 61, 45, 9 }));
  set_short( "Passage - x61y45z9" );
set_objects( DIR+"/npc/professor.c");
 set_exits( ([
  "north" : DIR+"/rooms/x61y46z9.c",
  "south" : DIR+"/rooms/x61y44z9.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the iridium glow of the gunk in this area. The walls and floors are covered with liquid. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
